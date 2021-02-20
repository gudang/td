//
// Copyright Aliaksei Levin (levlam@telegram.org), Arseny Smirnov (arseny30@gmail.com) 2014-2021
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

#include "td/telegram/td_api.h"

#include "td/utils/common.h"
#include "td/utils/Slice.h"

namespace td {

enum class SuggestedAction : int32 { Empty, EnableArchiveAndMuteNewChats, CheckPhoneNumber, SeeTicksHint };

SuggestedAction get_suggested_action(Slice action_str);

string get_suggested_action_str(SuggestedAction action);

SuggestedAction get_suggested_action(const td_api::object_ptr<td_api::SuggestedAction> &action_object);

td_api::object_ptr<td_api::SuggestedAction> get_suggested_action_object(SuggestedAction action);

td_api::object_ptr<td_api::updateSuggestedActions> get_update_suggested_actions_object(
    const vector<SuggestedAction> &added_actions, const vector<SuggestedAction> &removed_actions);

}  // namespace td
