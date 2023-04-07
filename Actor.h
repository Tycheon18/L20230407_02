#pragma once
class AActor
{
public:
	AActor();
	virtual ~AActor();

	virtual void Input();
	virtual void Tick();
	virtual void Render();

public:
	int X;
	int Y;
	char Shape;
};

