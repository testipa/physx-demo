/*
 * This file is part of the GiantPhysX package.
 *
 * Copyright (C) 2019, GIANT - liangjinyao@ztgame.com. ALL RIGHTS RESERVED.
 */
#pragma once

#include "GiantPhysX/GxAPIForward.h"
#include "GiantPhysX/GxVec3.h"

namespace GiantPhysX
{
	/// <summary>
	/// ��Ϸ������
	/// �ṩ��Ե�����Ϸ��������Լ�����
	/// </summary>
	class GX_API GxIGameObject
	{
	public:
		/// <summary>
		/// ��������
		/// </summary>
		virtual ~GxIGameObject() {}

		virtual bool GetActive() = 0;
		virtual void SetActive(bool active) = 0;

		virtual const char* GetName() = 0;
		virtual void SetName(const char* name) = 0;

		virtual int GetMask() = 0;
		virtual void SetMask(int layer) = 0;

		virtual GxVec3 GetPosition() = 0;
		virtual void SetPosition(float x, float y, float z) = 0;

		virtual bool Raycast(GxIGameObject* target, int mask) = 0;
		virtual bool Raycast(GxVec3 originOffset, GxIGameObject* target, GxVec3 targetOffset, int mask) = 0;
	};

} // namespace GiantPhysX
