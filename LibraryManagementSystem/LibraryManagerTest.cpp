// LibraryManagerTest.cpp
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "LibraryManager.h"

TEST_CASE("LibraryManager Singleton Test") {
    auto& library1 = LibraryManager::getInstance();
    auto& library2 = LibraryManager::getInstance();

    REQUIRE(&library1 == &library2); // Should be the same instance
}
