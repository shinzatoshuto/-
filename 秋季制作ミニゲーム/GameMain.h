#pragma once
#include "AbstractScene.h"

class Main : public AbstractScene {
public:
	virtual ~Main() {};
	virtual AbstractScene* Update() override;
	virtual void Draw() override;
};