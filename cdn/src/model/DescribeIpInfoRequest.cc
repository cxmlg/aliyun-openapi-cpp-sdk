/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/cdn/model/DescribeIpInfoRequest.h>

using AlibabaCloud::Cdn::Model::DescribeIpInfoRequest;

DescribeIpInfoRequest::DescribeIpInfoRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeIpInfo")
{}

DescribeIpInfoRequest::~DescribeIpInfoRequest()
{}

std::string DescribeIpInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeIpInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeIpInfoRequest::getIP()const
{
	return iP_;
}

void DescribeIpInfoRequest::setIP(const std::string& iP)
{
	iP_ = iP;
	setParameter("IP", iP);
}

long DescribeIpInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIpInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeIpInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeIpInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

