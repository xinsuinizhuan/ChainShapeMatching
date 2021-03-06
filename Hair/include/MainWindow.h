#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "NGLScene.h"
#include "Hair.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
	//----------------------------------------------------------------------------------------------------------------------
	/// @brief ctor
	/// @param[in] parent the parent window
	//----------------------------------------------------------------------------------------------------------------------
    explicit MainWindow(QWidget *parent = 0);
	//----------------------------------------------------------------------------------------------------------------------
	/// @brief dtor
	//----------------------------------------------------------------------------------------------------------------------
	~MainWindow();

private:
	//----------------------------------------------------------------------------------------------------------------------
	/// @brief a pointer to our user interface
	//----------------------------------------------------------------------------------------------------------------------
	Ui::MainWindow *m_ui;
	//----------------------------------------------------------------------------------------------------------------------
	/// @brief our open gl window
	//----------------------------------------------------------------------------------------------------------------------
	NGLScene *m_gl;
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief our hair simulation object
    //----------------------------------------------------------------------------------------------------------------------
    Hair *m_hair;
private slots :
	//----------------------------------------------------------------------------------------------------------------------
	/// @brief slot to toggle the sim on and off
	//----------------------------------------------------------------------------------------------------------------------
	void toggleSim(bool _s);
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief slot to set the the number of strands in hair simulation
    //----------------------------------------------------------------------------------------------------------------------
    void setNumberOfStrands();
	//----------------------------------------------------------------------------------------------------------------------
    /// @brief slot to set the the position of the head in hair simulation
	//----------------------------------------------------------------------------------------------------------------------
    void setHeadPosition();
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief slot to set the the radius of the head in hair simulation
    //----------------------------------------------------------------------------------------------------------------------
    void setHeadRadius();
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief slot to set the the gravity force in hair simulation
    //----------------------------------------------------------------------------------------------------------------------
    void setGravity();
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief slot to to toggle the selfcollision on and off in hair simulation
    //----------------------------------------------------------------------------------------------------------------------
    void setSelfCollision();
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief slot to set the the half region width in hair simulation
    //----------------------------------------------------------------------------------------------------------------------
    void setHalfRegionWidth();

};

#endif // MAINWINDOW_H
