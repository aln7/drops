/*
 * This file is part of the drops crypto messenger.
 *
 * (C) 2016-2017 by Sebastian Krahmer,
 *                  sebastian [dot] krahmer [at] gmail [dot] com
 *
 * drops is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * drops is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with drops.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef drops_flavor_h
#define drops_flavor_h

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string>

namespace flavor {

enum {
	NONBLOCK = 1
};


// return a (unblocking if NONBLOCK flag is set) accepted socket
int accept(int, struct sockaddr *, socklen_t *, int);


}


#endif

