/*
 * Implementation of MainWindow class
 */
/**
 * Copyright 2013 Denfer team. See http://github.com/necto/denfer
 */

#include "iface.hpp"
#include "main-window.hpp"

namespace gui
{

MainWindow::MainWindow()
{
    dialog = new QDialog;
    l = new QLabel( dialog);
    l->setText("<h1> This is the Denfer application</h1>");
}

void MainWindow::show()
{
    dialog->show();
}

MainWindow::~MainWindow()
{
    delete l;
    delete dialog;
}

MainWindowIface* MainWindowIface::create( int argc, char** argv)
{
    (void)argc;
    (void)argv;
    return new MainWindow;
}

}; //namespace gui
