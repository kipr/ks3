#ifndef _KS3_GUI_SIMULATOR_WINDOW_HPP_
#define _KS3_GUI_SIMULATOR_WINDOW_HPP_

#include <QMainWindow>

namespace Ui
{
    class SimulatorWindow;
}

namespace ks3
{
    namespace gui
    {
        class SimulatorWindow : public QMainWindow
        {
        Q_OBJECT
        public:
            SimulatorWindow();
            ~SimulatorWindow();

        private:
            Ui::SimulatorWindow *ui;
        };
    }
}

#endif
