# June 25th, 2024:
#   This the my use of PyQt6 as GUI with the code i made in the passwordManager.py file
#   Need to do:
#           - add the same functions in passwordManager.py file in this GUI file
#           - style the GUI in a way that looks pleasing
#   Currently completed:
#           - started the development of the GUI for this project
#           - got the json feature to work


import sys
import json
from PyQt6.QtWidgets import QApplication, QWidget, QVBoxLayout, QHBoxLayout, QLabel, QLineEdit, QPushButton, QTextEdit, QMessageBox

class DictionaryApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()
        self.user_dict = self.load_dictionary()

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

        self.save_button = QPushButton('Save Dictionary', self)
        self.save_button.clicked.connect(self.save_dictionary)
        self.layout.addWidget(self.save_button)

        self.load_button = QPushButton('Load Dictionary', self)
        self.load_button.clicked.connect(self.display_dictionary)
        self.layout.addWidget(self.load_button)

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
        with open('data.json', 'w') as file:
            json.dump(self.user_dict, file)
        QMessageBox.information(self, 'Success', 'Dictionary saved successfully')

    def load_dictionary(self):
        try:
            with open('data.json', 'r') as file:
                return json.load(file)
        except FileNotFoundError:
            return {}

    def display_dictionary(self):
        self.text_area.clear()
        if self.user_dict:
            for key, value in self.user_dict.items():
                self.text_area.append(f"{key}: {value}")
        else:
            self.text_area.append("No entries found")

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = DictionaryApp()
    ex.show()
    sys.exit(app.exec())
