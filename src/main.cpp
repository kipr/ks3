#include <ks3/gui/simulator_window.hpp>

#include <QApplication>

int main(int argc, char *argv[])
{
    using namespace ks3::gui;
    
    QApplication app(argc, argv);
    
    SimulatorWindow simulator;
    simulator.show();
    simulator.raise();
    
    return app.exec();
}