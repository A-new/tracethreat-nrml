
#define GLOG_NO_ABBREVIATED_SEVERITIES

#include "glog/logging.h"


#include <gtest/gtest.h>

#include "services/AuthenticationHandler.hpp"
//#include "envi/environment_test.hpp"

 

TEST(AuthenticationHandler, pingActive){

	authentication::AuthenticationIf * authen = new services::AuthenticationHandler();	
	//authen->pingActive(12);
}


GTEST_API_ int main(int argc, char ** argv){

  testing::InitGoogleTest(&argc, argv);
  ///testing::AddGlobalTestEnvironment( new SystemTestingEnvironment(argc, argv));
  return RUN_ALL_TESTS();
}
