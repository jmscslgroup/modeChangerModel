#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block modeChanger/Subscribe2
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_modeChanger_geometry_msgs_Twist> Sub_modeChanger_49;

// For Block modeChanger/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_modeChanger_geometry_msgs_Twist> Pub_modeChanger_36;

// For Block modeChanger/Set Parameter1
extern SimulinkParameterSetter<real64_T, double> ParamSet_modeChanger_51;

// For Block modeChanger/Set Parameter2
extern SimulinkParameterSetter<real64_T, double> ParamSet_modeChanger_52;

// For Block modeChanger/Set Parameter3
extern SimulinkParameterSetter<real64_T, double> ParamSet_modeChanger_53;

void slros_node_init(int argc, char** argv);

#endif
