// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2018 The Circle Foundation
// Copyright (c) 2019 The Cryo Network
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "ILogger.h"
#include "LoggerMessage.h"

namespace Logging {

class LoggerRef {
public:
  LoggerRef(ILogger& logger, const std::string& category);
  LoggerMessage operator()(Level level = INFO, const std::string& color = DEFAULT) const;
  ILogger& getLogger() const;

private:
  ILogger* logger;
  std::string category;
};

}
