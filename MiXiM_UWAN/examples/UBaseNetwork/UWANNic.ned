//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package org.uwan.examples.UBaseNetwork;

import org.mixim.modules.nic.WirelessNic;

module UWANNic extends WirelessNic
{
    parameters:
        phyType = "PhyLayer";
        macType = "UWANMacLayer";
        
        phy.headerLength = 40bit;
        mac.headerLength = 40bit;
        
        // UWANMac does not support switching times
        phy.timeRXToTX    = 0s;
        phy.timeRXToSleep = 0s;
        phy.timeTXToRX    = 0s;
        phy.timeTXToSleep = 0s;
        phy.timeSleepToRX = 0s;
        phy.timeSleepToTX = 0s;
}