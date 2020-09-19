#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "modeChanger";

// For Block modeChanger/Subscribe2
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_modeChanger_geometry_msgs_Twist> Sub_modeChanger_49;

// For Block modeChanger/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_modeChanger_geometry_msgs_Twist> Pub_modeChanger_36;

// For Block modeChanger/Set Parameter1
SimulinkParameterSetter<real64_T, double> ParamSet_modeChanger_51;

// For Block modeChanger/Set Parameter2
SimulinkParameterSetter<real64_T, double> ParamSet_modeChanger_52;

// For Block modeChanger/Set Parameter3
SimulinkParameterSetter<real64_T, double> ParamSet_modeChanger_53;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

