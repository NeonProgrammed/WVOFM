#pragma once

#include "Core.cpp"

namespace WVOFM {

	class WVOFM_API App {

	public:

		App();

		virtual ~App();

		void run();

	};

	App* CreateApplication();
}