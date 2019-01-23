#pragma once

extern WVOFM::App* WVOFM::CreateApplication();

int main(int argc, char** argv) {
	auto app = WVOFM::CreateApplication();
	app->run();
	delete app;
}