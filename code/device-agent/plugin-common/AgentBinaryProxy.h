// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

// ToDo: use common paths
#include "device-agent/common/plugins/PluginInterfaces.h"
#include "device-agent/common/plugins/CrossBinaryResponse.h"

namespace Microsoft { namespace Azure { namespace DeviceManagement { namespace Plugin { namespace Common {

    class AgentBinaryProxy
    {
    public:
        AgentBinaryProxy();

        void SetReverseInvoke(
            DMCommon::PluginReverseInvokePtr ReverseInvoke_);

        void SetReverseDeleteBuffer(
            DMCommon::PluginReverseDeleteBufferPtr ReverseDeleteBuffer_);

        Json::Value ReverseInvoke(
            const std::string& jsonInputString);

    private:
        DMCommon::PluginReverseInvokePtr AgentReverseInvoke;
        DMCommon::PluginReverseDeleteBufferPtr AgentReverseDeleteBuffer;
    };

}}}}}
