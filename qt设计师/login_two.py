# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'login_two.ui'
#
# Created by: PyQt5 UI code generator 5.15.4
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_Form(object):
    def setupUi(self, Form):
        Form.setObjectName("Form")
        Form.resize(400, 300)
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(Form)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        spacerItem = QtWidgets.QSpacerItem(20, 78, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Expanding)
        self.verticalLayout_2.addItem(spacerItem)
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setObjectName("verticalLayout")
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")
        spacerItem1 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_2.addItem(spacerItem1)
        self.label = QtWidgets.QLabel(Form)
        self.label.setObjectName("label")
        self.horizontalLayout_2.addWidget(self.label)
        self.lineEdit = QtWidgets.QLineEdit(Form)
        self.lineEdit.setObjectName("lineEdit")
        self.horizontalLayout_2.addWidget(self.lineEdit)
        spacerItem2 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_2.addItem(spacerItem2)
        self.verticalLayout.addLayout(self.horizontalLayout_2)
        self.horizontalLayout = QtWidgets.QHBoxLayout()
        self.horizontalLayout.setObjectName("horizontalLayout")
        spacerItem3 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem3)
        self.label_2 = QtWidgets.QLabel(Form)
        self.label_2.setObjectName("label_2")
        self.horizontalLayout.addWidget(self.label_2)
        self.lineEdit_2 = QtWidgets.QLineEdit(Form)
        self.lineEdit_2.setObjectName("lineEdit_2")
        self.horizontalLayout.addWidget(self.lineEdit_2)
        spacerItem4 = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout.addItem(spacerItem4)
        self.verticalLayout.addLayout(self.horizontalLayout)
        self.pushButton = QtWidgets.QPushButton(Form)
        self.pushButton.setMinimumSize(QtCore.QSize(200, 50))
        self.pushButton.setMaximumSize(QtCore.QSize(200, 50))
        self.pushButton.setStyleSheet("background-color: rgb(255, 85, 0);\n"
"border-radius:10px;")
        self.pushButton.setObjectName("pushButton")
        self.verticalLayout.addWidget(self.pushButton, 0, QtCore.Qt.AlignHCenter)
        self.verticalLayout_2.addLayout(self.verticalLayout)
        spacerItem5 = QtWidgets.QSpacerItem(20, 78, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Expanding)
        self.verticalLayout_2.addItem(spacerItem5)

        self.retranslateUi(Form)
        QtCore.QMetaObject.connectSlotsByName(Form)

    def retranslateUi(self, Form):
        _translate = QtCore.QCoreApplication.translate
        Form.setWindowTitle(_translate("Form", "Form"))
        self.label.setText(_translate("Form", "TextLabel"))
        self.label_2.setText(_translate("Form", "TextLabel"))
        self.pushButton.setText(_translate("Form", "PushButton"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    Form = QtWidgets.QWidget()
    ui = Ui_Form()
    ui.setupUi(Form)
    Form.show()
    sys.exit(app.exec_())
