#include "gtest/gtest.h"

#include <sstream>

#include <yaml-cpp/yaml.h>

TEST(YAML, simple_load) {

  std::stringstream yaml;

  yaml << "foo:" << std::endl
       << "  bar: 1" << std::endl
       << "  baz: 2" << std::endl;

  auto n = YAML::Load(yaml.str());

  ASSERT_EQ(1, n["foo"]["bar"].as<int>());
  ASSERT_EQ(2, n["foo"]["baz"].as<int>());

}

