﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CampaignStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace CampaignStatusMapper
      {

        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int EXECUTING_HASH = HashingUtils::HashString("EXECUTING");
        static const int PENDING_NEXT_RUN_HASH = HashingUtils::HashString("PENDING_NEXT_RUN");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        CampaignStatus GetCampaignStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return CampaignStatus::SCHEDULED;
          }
          else if (hashCode == EXECUTING_HASH)
          {
            return CampaignStatus::EXECUTING;
          }
          else if (hashCode == PENDING_NEXT_RUN_HASH)
          {
            return CampaignStatus::PENDING_NEXT_RUN;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CampaignStatus::COMPLETED;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return CampaignStatus::PAUSED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return CampaignStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CampaignStatus>(hashCode);
          }

          return CampaignStatus::NOT_SET;
        }

        Aws::String GetNameForCampaignStatus(CampaignStatus enumValue)
        {
          switch(enumValue)
          {
          case CampaignStatus::SCHEDULED:
            return "SCHEDULED";
          case CampaignStatus::EXECUTING:
            return "EXECUTING";
          case CampaignStatus::PENDING_NEXT_RUN:
            return "PENDING_NEXT_RUN";
          case CampaignStatus::COMPLETED:
            return "COMPLETED";
          case CampaignStatus::PAUSED:
            return "PAUSED";
          case CampaignStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CampaignStatusMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
