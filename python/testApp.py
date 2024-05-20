import sys 

from PyQt6.QtCore import QSize, Qt
from PyQt6.QtWidgets import (QApplication, QMainWindow, QWidget, 
                             QLineEdit, QPushButton, 
                             QLabel, QToolBar, QStatusBar, QVBoxLayout
                             )
from PyQt6.QtGui import QIcon, QAction

class anotherWindow(QWidget):
    # this will be another free-floating window
    def __init__(self):
        super().__init__()
        layout = QVBoxLayout()
        self.label = QLabel("Another Window")
        layout.addWidget(self.label)
        self.setLayout(layout)
    
class MainWindow(QMainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.setWindowTitle("Test App")
        self.setWindowIcon(QIcon('C:/Users/torre/OneDrive/Documents/lockicon.png'))
        
        # Welcome text
        widget = QLabel("Hello, welcome to savepass.")
        font = widget.font()
        font.setPointSize(18)
        widget.setFont(font)
        widget.setAlignment(Qt.AlignmentFlag.AlignCenter | Qt.AlignmentFlag.AlignVCenter)
        self.setCentralWidget(widget)
        
        # Enter button below text
        
        
        # Toolbar
        toolbar = QToolBar("My main toolbar")
        
        # Toolbar buttons
        button_action = QAction("Edit File", self)
        button_action.setStatusTip("This is your button")
        button_action.triggered.connect(self.onMyToolBarButtonClick)
        button_action.setCheckable(True)
        toolbar.addAction(button_action)
        
        toolbar.addSeparator()
        
        button_action2 = QAction("Save File", self)
        button_action2.setStatusTip("Save File Button")
        button_action2.triggered.connect(self.onMyToolBarButtonClick)
        button_action2.setCheckable(True)
        toolbar.addAction(button_action2)
        
        self.setStatusBar(QStatusBar(self))
        
        # Menu 
        menu = self.menuBar()
        
        file_menu = menu.addMenu("&File")
        file_menu.addAction(button_action)
        file_menu.addSeparator()
        
        file_submenu = file_menu.addMenu("Save")
        file_submenu.addAction(button_action2)
        
        
        # width, height
        self.setFixedSize(QSize(800, 600))
        self.setMinimumSize(QSize(200,150))
        self.setMaximumSize(QSize(1600, 1200))
        
    # toolbar function
    def onMyToolBarButtonClick(self, s):
        print("Click", s)
        
    def showAnotherWindow(self):
        w = anotherWindow()
        w.show()
        
        

# Start working on implementing new screens for save password pages and previously saved passwords

app = QApplication(sys.argv)

#Qt widget which will be my window
window = MainWindow()
window.show() # By default windows are hidden

# This shows the anotherWindow (other window)
w =anotherWindow()
w.show()

sys.exit(app.exec()) # this starts the event loop