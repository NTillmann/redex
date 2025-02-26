/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <cstdio>
#include <string>

namespace jemalloc_util {

void enable_profiling();

void disable_profiling();

void dump(const std::string& file_name);

class ScopedProfiling final {
 public:
  explicit ScopedProfiling(bool enable) {
    if (enable) {
      fprintf(stderr, "Enabling memory profiling...\n");
      enable_profiling();
    }
  }

  ~ScopedProfiling() { disable_profiling(); }
};

} // namespace jemalloc_util
