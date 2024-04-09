import sys 

from PyQt6.QtCore import QSize, Qt
from PyQt6.QtWidgets import QApplication, QMainWindow, QWidget, QLineEdit, QPushButton, QTextEdit,QVBoxLayout
from PyQt6.QtGui import QIcon

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Test App")
        self.setWindowIcon(QIcon('C:/Users/torre/OneDrive/Documents/lockicon.png'))
        
        # width, height
        self.setFixedSize(QSize(800, 600))
        self.setMinimumSize(QSize(200,150))
        self.setMaximumSize(QSize(1600, 1200))

app = QApplication(sys.argv)

#Qt widget which will be my window
window = MainWindow()
window.show() # By default windows are hidden

sys.exit(app.exec()) # this starts the event loop