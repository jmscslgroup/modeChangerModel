/*
 * modeChanger_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "modeChanger".
 *
 * Model version              : 1.25
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Fri Sep 18 22:19:45 2020
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_modeChanger_types_h_
#define RTW_HEADER_modeChanger_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_modeChanger_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_modeChanger_geometry_msgs_Vector3_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_modeChanger_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_modeChanger_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_modeChanger_geometry_msgs_Twist_

typedef struct {
  SL_Bus_modeChanger_geometry_msgs_Vector3 Linear;
  SL_Bus_modeChanger_geometry_msgs_Vector3 Angular;
} SL_Bus_modeChanger_geometry_msgs_Twist;

#endif

#ifndef struct_tag_rVaL2jCthDg1Nc4cghuMrG
#define struct_tag_rVaL2jCthDg1Nc4cghuMrG

struct tag_rVaL2jCthDg1Nc4cghuMrG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /*struct_tag_rVaL2jCthDg1Nc4cghuMrG*/

#ifndef typedef_ros_slros_internal_block_SetP_T
#define typedef_ros_slros_internal_block_SetP_T

typedef struct tag_rVaL2jCthDg1Nc4cghuMrG ros_slros_internal_block_SetP_T;

#endif                               /*typedef_ros_slros_internal_block_SetP_T*/

#ifndef struct_tag_rkSooZHJZnr3Dpfu1LNqfH
#define struct_tag_rkSooZHJZnr3Dpfu1LNqfH

struct tag_rkSooZHJZnr3Dpfu1LNqfH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /*struct_tag_rkSooZHJZnr3Dpfu1LNqfH*/

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct tag_rkSooZHJZnr3Dpfu1LNqfH ros_slros_internal_block_Publ_T;

#endif                               /*typedef_ros_slros_internal_block_Publ_T*/

#ifndef struct_tag_9SewJ4y3IXNs5GrZti8qkG
#define struct_tag_9SewJ4y3IXNs5GrZti8qkG

struct tag_9SewJ4y3IXNs5GrZti8qkG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /*struct_tag_9SewJ4y3IXNs5GrZti8qkG*/

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct tag_9SewJ4y3IXNs5GrZti8qkG ros_slros_internal_block_Subs_T;

#endif                               /*typedef_ros_slros_internal_block_Subs_T*/

/* Parameters (default storage) */
typedef struct P_modeChanger_T_ P_modeChanger_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_modeChanger_T RT_MODEL_modeChanger_T;

#endif                                 /* RTW_HEADER_modeChanger_types_h_ */
