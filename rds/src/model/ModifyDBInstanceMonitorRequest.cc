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

#include <alibabacloud/rds/model/ModifyDBInstanceMonitorRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceMonitorRequest;

ModifyDBInstanceMonitorRequest::ModifyDBInstanceMonitorRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceMonitor")
{}

ModifyDBInstanceMonitorRequest::~ModifyDBInstanceMonitorRequest()
{}

long ModifyDBInstanceMonitorRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceMonitorRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceMonitorRequest::getPeriod()const
{
	return period_;
}

void ModifyDBInstanceMonitorRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string ModifyDBInstanceMonitorRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceMonitorRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceMonitorRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDBInstanceMonitorRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDBInstanceMonitorRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceMonitorRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceMonitorRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceMonitorRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long ModifyDBInstanceMonitorRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceMonitorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceMonitorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceMonitorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

