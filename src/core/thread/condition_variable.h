/*
 * Copyright (c) 2012-2018 Daniele Bartolini and individual contributors.
 * License: https://github.com/dbartolini/crown/blob/master/LICENSE
 */

#pragma once

#include "core/thread/mutex.h"

namespace crown
{
/// Condition variable.
///
/// @ingroup Thread
struct ConditionVariable
{
	CE_ALIGN_DECL(16, u8 _data[64]);

	///
	ConditionVariable();

	///
	~ConditionVariable();

	///
	ConditionVariable(const ConditionVariable&) = delete;

	///
	ConditionVariable& operator=(const ConditionVariable&) = delete;

	///
	void wait(Mutex& mutex);

	///
	void signal();
};

} // namespace crown
