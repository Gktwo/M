﻿#pragma once

#include "../FunctionIncludes.h"

namespace cheat {
	class ShowIndicators : public Function {
	public:
	    ConfigField<bool> f_Enabled;
	    ConfigField<bool> f_Waypoints;
	    ConfigField<bool> f_Chests;

	    Hotkey f_Hotkey;

	    void GUI() override;
	    void Outer() override;
	    void Status() override;

	    std::string getModule() override;

	    static ShowIndicators& getInstance();

	    ShowIndicators();
	};
}
