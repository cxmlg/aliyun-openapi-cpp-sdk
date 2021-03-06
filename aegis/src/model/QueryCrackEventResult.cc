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

#include <alibabacloud/aegis/model/QueryCrackEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

QueryCrackEventResult::QueryCrackEventResult() :
	ServiceResult()
{}

QueryCrackEventResult::QueryCrackEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCrackEventResult::~QueryCrackEventResult()
{}

void QueryCrackEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"];
	for (auto value : allData)
	{
		Data dataObject;
		auto allList = value["List"]["Entity"];
		for (auto value : allList)
		{
			Data::Entity entityObject;
			if(!value["Uuid"].isNull())
				entityObject.uuid = value["Uuid"].asString();
			if(!value["AttackTime"].isNull())
				entityObject.attackTime = value["AttackTime"].asString();
			if(!value["AttackType"].isNull())
				entityObject.attackType = std::stoi(value["AttackType"].asString());
			if(!value["AttackTypeName"].isNull())
				entityObject.attackTypeName = value["AttackTypeName"].asString();
			if(!value["BuyVersion"].isNull())
				entityObject.buyVersion = value["BuyVersion"].asString();
			if(!value["CrackSourceIp"].isNull())
				entityObject.crackSourceIp = value["CrackSourceIp"].asString();
			if(!value["CrackTimes"].isNull())
				entityObject.crackTimes = std::stoi(value["CrackTimes"].asString());
			if(!value["GroupId"].isNull())
				entityObject.groupId = std::stoi(value["GroupId"].asString());
			if(!value["InstanceName"].isNull())
				entityObject.instanceName = value["InstanceName"].asString();
			if(!value["InstanceId"].isNull())
				entityObject.instanceId = value["InstanceId"].asString();
			if(!value["Ip"].isNull())
				entityObject.ip = value["Ip"].asString();
			if(!value["Region"].isNull())
				entityObject.region = value["Region"].asString();
			if(!value["Status"].isNull())
				entityObject.status = std::stoi(value["Status"].asString());
			if(!value["StatusName"].isNull())
				entityObject.statusName = value["StatusName"].asString();
			if(!value["Location"].isNull())
				entityObject.location = value["Location"].asString();
			if(!value["InWhite"].isNull())
				entityObject.inWhite = std::stoi(value["InWhite"].asString());
			if(!value["UserName"].isNull())
				entityObject.userName = value["UserName"].asString();
			dataObject.list.push_back(entityObject);
		}
		auto allPageInfo = value["PageInfo"];
		for (auto value : allPageInfo)
		{
			Data::PageInfo pageInfoObject;
			if(!value["CurrentPage"].isNull())
				pageInfoObject.currentPage = std::stoi(value["CurrentPage"].asString());
			if(!value["PageSize"].isNull())
				pageInfoObject.pageSize = std::stoi(value["PageSize"].asString());
			if(!value["TotalCount"].isNull())
				pageInfoObject.totalCount = std::stoi(value["TotalCount"].asString());
			if(!value["Count"].isNull())
				pageInfoObject.count = std::stoi(value["Count"].asString());
			dataObject.pageInfo.push_back(pageInfoObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryCrackEventResult::getRequestId()const
{
	return requestId_;
}

std::string QueryCrackEventResult::getMessage()const
{
	return message_;
}

std::vector<QueryCrackEventResult::Data> QueryCrackEventResult::getData()const
{
	return data_;
}

std::string QueryCrackEventResult::getCode()const
{
	return code_;
}

bool QueryCrackEventResult::getSuccess()const
{
	return success_;
}

