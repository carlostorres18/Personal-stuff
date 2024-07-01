# June 25th, 2024:
#   This the my use of PyQt6 as GUI with the code i made in the passwordManager.py file
#   Need to do:
#           - add the same functions in passwordManager.py file in this GUI file
#           - style the GUI in a way that looks pleasing
#   Currently completed:
#           - started the development of the GUI for this project
#           - got the json feature to work

# July 1st, 2024:
#   Finished adding save and delete functions
#       - Now you can save with a custom name (has to end with the .json handle tho)
#       - And you can delete with custom name (has to end with the .json handle too)
#
#   I also added new features to previous functions
#   Now when you delete previous functions the display screen it clears once the file
#       has been deleted
#
#   Need to do:
#       - Change layout and look for a way to make the app look "pretty"

import sys
import os
import json
from PyQt6.QtWidgets import QApplication, QWidget, QVBoxLayout, QLineEdit, QPushButton, QTextEdit, QMessageBox

class DictionaryApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()
        self.user_dict = {}

    def initUI(self):
        self.setWindowTitle('Dictionary App')

        self.layout = QVBoxLayout()

        self.key_input = QLineEdit(self)
        self.key_input.setPlaceholderText('Enter key')
        self.layout.addWidget(self.key_input)

        self.value_input = QLineEdit(self)
        self.value_input.setPlaceholderText('Enter value')
        self.layout.addWidget(self.value_input)

        self.add_button = QPushButton('Add Entry', self)
        self.add_button.clicked.connect(self.add_entry)
        self.layout.addWidget(self.add_button)
        
        self.save_filename_input = QLineEdit(self)
        self.save_filename_input.setPlaceholderText('Enter filename to save (e.g., data.json)')
        self.layout.addWidget(self.save_filename_input)

        self.save_button = QPushButton('Save Dictionary', self)
        self.save_button.clicked.connect(self.save_dictionary)
        self.layout.addWidget(self.save_button)

        self.load_filename_input = QLineEdit(self)
        self.load_filename_input.setPlaceholderText('Enter filename to load (e.g., data.json)')
        self.layout.addWidget(self.load_filename_input)

        self.load_button = QPushButton('Load Dictionary', self)
        self.load_button.clicked.connect(self.load_dictionary)
        self.layout.addWidget(self.load_button)

        self.delete_filename_input = QLineEdit(self)
        self.delete_filename_input.setPlaceholderText('Enter filename to delete (e.g., data.json)')
        self.layout.addWidget(self.delete_filename_input)

        self.delete_button = QPushButton('Delete Dictionary', self)
        self.delete_button.clicked.connect(self.delete_dictionary)
        self.layout.addWidget(self.delete_button)

        self.text_area = QTextEdit(self)
        self.text_area.setReadOnly(True)
        self.layout.addWidget(self.text_area)

        self.setLayout(self.layout)

    def add_entry(self):
        key = self.key_input.text()
        value = self.value_input.text()

        if key and value:
            self.user_dict[key] = value
            self.key_input.clear()
            self.value_input.clear()
            QMessageBox.information(self, 'Success', 'Entry added successfully')
        else:
            QMessageBox.warning(self, 'Error', 'Both key and value must be provided')

    def save_dictionary(self):
        filename = self.save_filename_input.text()
        if not filename:
            filename = 'data.json'
        
        with open(filename, 'w') as file:
            json.dump(self.user_dict, file)
        QMessageBox.information(self, 'Success', f'Dictionary saved successfully as {filename}')
        self.save_filename_input.clear()

    def load_dictionary(self):
        filename = self.load_filename_input.text()
        if not filename:
            QMessageBox.warning(self, 'Error', 'Please enter a filename to load')
            return

        try:
            with open(filename, 'r') as file:
                self.user_dict = json.load(file)
            self.display_dictionary()
            QMessageBox.information(self, 'Success', f'Dictionary loaded successfully from {filename}')
        except FileNotFoundError:
            QMessageBox.warning(self, 'Error', f'No file named {filename} exists.')
        self.load_filename_input.clear()

    def display_dictionary(self):
        self.text_area.clear()
        if self.user_dict:
            for key, value in self.user_dict.items():
                self.text_area.append(f"{key}: {value}")
        else:
            self.text_area.append("No entries found")

    def delete_dictionary(self):
        filename = self.delete_filename_input.text()
        if os.path.exists(filename):
            os.remove(filename)
            QMessageBox.information(self, 'Success', f'Dictionary {filename} has been deleted.')
            self.text_area.clear()
        else:
            QMessageBox.warning(self, 'Error', f'No file named {filename} exists.')
        self.delete_filename_input.clear()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = DictionaryApp()
    ex.show()
    sys.exit(app.exec())
