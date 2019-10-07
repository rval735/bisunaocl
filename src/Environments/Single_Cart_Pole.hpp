//
//  Single_Cart_Pole.hpp
//  BiSUNAOpenCL
//

// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#ifndef SINGLE_CART_POLE_H
#define SINGLE_CART_POLE_H

#include "Reinforcement_Environment.h"

#define FORCE_MAG 10.0
   
class Single_Cart_Pole : public Reinforcement_Environment
{
	public:

		Single_Cart_Pole(ushortT eID, const char *fileName);
		~Single_Cart_Pole();
    
		void start(int &number_of_observation_vars, int &number_of_action_vars);
		float step(ParameterType *action);
		float restart();
		void print();
	
		//auxiliary functions
        void cart_pole(float force, float *x, float *x_dot, float *theta, float *theta_dot);

		float x, x_dot,theta,theta_dot;
};

#endif
