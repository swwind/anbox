/*
 * Copyright (C) 2016 Simon Fels <morphis@gravedo.de>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "anbox/bridge/platform_api_skeleton.h"
#include "anbox/logger.h"

#include "anbox_bridge.pb.h"

namespace anbox {
namespace bridge {
PlatformApiSkeleton::PlatformApiSkeleton(const std::shared_ptr<rpc::PendingCallCache> &pending_calls) :
    pending_calls_(pending_calls) {
}

PlatformApiSkeleton::~PlatformApiSkeleton() {
}
} // namespace bridge
} // namespace anbox