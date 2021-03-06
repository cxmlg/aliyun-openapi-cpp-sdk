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

#include <alibabacloud/cdn/model/DescribeLiveAppRecordConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveAppRecordConfigResult::DescribeLiveAppRecordConfigResult() :
	ServiceResult()
{}

DescribeLiveAppRecordConfigResult::DescribeLiveAppRecordConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveAppRecordConfigResult::~DescribeLiveAppRecordConfigResult()
{}

void DescribeLiveAppRecordConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto liveAppRecordNode = value["LiveAppRecord"];
	if(!liveAppRecordNode["DomainName"].isNull())
		liveAppRecord_.domainName = liveAppRecordNode["DomainName"].asString();
	if(!liveAppRecordNode["AppName"].isNull())
		liveAppRecord_.appName = liveAppRecordNode["AppName"].asString();
	if(!liveAppRecordNode["OssEndpoint"].isNull())
		liveAppRecord_.ossEndpoint = liveAppRecordNode["OssEndpoint"].asString();
	if(!liveAppRecordNode["OssBucket"].isNull())
		liveAppRecord_.ossBucket = liveAppRecordNode["OssBucket"].asString();
	if(!liveAppRecordNode["OssObjectPrefix"].isNull())
		liveAppRecord_.ossObjectPrefix = liveAppRecordNode["OssObjectPrefix"].asString();
	if(!liveAppRecordNode["CreateTime"].isNull())
		liveAppRecord_.createTime = liveAppRecordNode["CreateTime"].asString();

}

DescribeLiveAppRecordConfigResult::LiveAppRecord DescribeLiveAppRecordConfigResult::getLiveAppRecord()const
{
	return liveAppRecord_;
}

