#include <ks3/gui/simulator_window.hpp>
#include <ui_simulator_window.h>

using namespace ks3::gui;

SimulatorWindow::SimulatorWindow()
    : QMainWindow()
    , ui(new Ui::SimulatorWindow)
{
    ui->setupUi(this);
}

SimulatorWindow::~SimulatorWindow()
{
    delete ui;
}