// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2018 The Circle Foundation
// Copyright (c) 2019 The Cryo Network
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <string>
#include "IOutputStream.h"

namespace Common {

class StringOutputStream : public IOutputStream {
public:
  StringOutputStream(std::string& out);
  size_t writeSome(const void* data, size_t size) override;

private:
  std::string& out;
};

}
