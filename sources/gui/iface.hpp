/**
 * Interface of profiler GUI
 */
/**
 * Copyright 2013 Denfer team
 */

#pragma once

namespace gui
{

class MainWindowIface
{
public:
    static MainWindowIface* create( int argc, char** argv);

    virtual void show() = 0;
};

}; //namespace gui
