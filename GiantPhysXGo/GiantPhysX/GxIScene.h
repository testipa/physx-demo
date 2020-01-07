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
	/// ������
	/// �ṩ��Ե������������Լ�����
	/// </summary>
	class GX_API GxIScene
	{
	public:
		/// <summary>
		/// ��������
		/// </summary>
		virtual ~GxIScene() {}

		virtual void Update() = 0;

		/// <summary>
		/// ��������Ϸ����
		/// </summary>
		/// <param name="config">��Ϸ���������ļ�·��</param>
		/// <returns>����Ϸ����</returns>
		virtual GxIGameObject* CreateGameObject(const char*cfg = nullptr) = 0;

		/// <summary>
		/// ������Ϸ����
		/// </summary>
		/// <param name="go">Ҫ���ٵ���Ϸ����</param>
		virtual void DestroyGameObject(GxIGameObject* go) = 0;

		virtual GxIGameObject* Raycast(GxVec3 origin, GxVec3 direction, float distance, int mask) = 0;
	};

} // namespace GiantPhysX
