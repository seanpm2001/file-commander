#pragma once

#include "cfilecommanderplugin.h"

class CFileCommanderToolPlugin : public CFileCommanderPlugin
{
public:
	[[nodiscard]] PluginType type() override;
};
