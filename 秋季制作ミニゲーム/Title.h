#pragma once
#include "AbstractScene.h"

class Title :public AbstractScene {
	Title* ti;
public:
	virtual ~Title() {
		delete ti;
	};
	virtual AbstractScene* Update() override;
	virtual void Draw() override;

public:

private:
	int MenuNumber = 0;
};