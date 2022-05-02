#pragma once

class State {

public:
	virtual State* PressFlyInput() = 0;
	virtual State* PressShootInput(bool Munitions) = 0;
	virtual State* ReleaseFlyInput(bool Field) = 0;
	virtual State* ReleaseShootInput() = 0;

};