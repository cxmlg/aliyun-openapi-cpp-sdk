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

#include <alibabacloud/cdn/model/DescribeDomainCertificateInfoRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainCertificateInfoRequest;

DescribeDomainCertificateInfoRequest::DescribeDomainCertificateInfoRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainCertificateInfo")
{}

DescribeDomainCertificateInfoRequest::~DescribeDomainCertificateInfoRequest()
{}

std::string DescribeDomainCertificateInfoRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainCertificateInfoRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainCertificateInfoRequest::getProduct()const
{
	return product_;
}

void DescribeDomainCertificateInfoRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DescribeDomainCertificateInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainCertificateInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeDomainCertificateInfoRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainCertificateInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool DescribeDomainCertificateInfoRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainCertificateInfoRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeDomainCertificateInfoRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainCertificateInfoRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainCertificateInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainCertificateInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainCertificateInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainCertificateInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainCertificateInfoRequest::getVersion()const
{
	return version_;
}

void DescribeDomainCertificateInfoRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeDomainCertificateInfoRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainCertificateInfoRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainCertificateInfoRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainCertificateInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeDomainCertificateInfoRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainCertificateInfoRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeDomainCertificateInfoRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainCertificateInfoRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeDomainCertificateInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainCertificateInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeDomainCertificateInfoRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainCertificateInfoRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeDomainCertificateInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainCertificateInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainCertificateInfoRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainCertificateInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeDomainCertificateInfoRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainCertificateInfoRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainCertificateInfoRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainCertificateInfoRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainCertificateInfoRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainCertificateInfoRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainCertificateInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainCertificateInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

