#pragma once

#include <string>
#include <filesystem>
#include "api/scanner/Scanner.h"

namespace util {
	extern std::filesystem::path getRootPath();
	extern std::filesystem::path getRoamingPath();
	extern std::filesystem::path getLatitePath();
	extern std::wstring strToWstr(std::string const& s);
	extern std::string wstrToStr(std::wstring const& ws);
	extern std::string format(std::string const& s);
	
	extern std::string toLower(std::string const& s);
	extern std::string toUpper(std::string const& s);
	extern std::vector<std::string> splitString(std::string const& s, char delim);

	extern inline uintptr_t findSignature(std::string_view signature) {
		return memory::findSignature(signature, "Minecraft.Windows.exe");
	}


}
