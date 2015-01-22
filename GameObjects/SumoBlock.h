#pragma once

#include "GameObject.h"
ref class SumoBlock : public GameObject
{
internal:
	SumoBlock();
	SumoBlock(DirectX::XMFLOAT3 position, SumoBlock^ target, float speed=1.0f);
	void Initialize(DirectX::XMFLOAT3 position, SumoBlock^ target, float speed);
	void Target(SumoBlock^ target);
	SumoBlock^ Target();
	float GetSpeedFactor() { return m_speed; };
	void SetSpeedFactor(float newFactor) { m_speed = newFactor; };
protected:
	void UpdatePosition() override;
	
	 

private:
	DirectX::XMFLOAT4X4 m_rotationMatrix;
	SumoBlock^ m_target;
	float m_angle;
	float m_speed;

};


