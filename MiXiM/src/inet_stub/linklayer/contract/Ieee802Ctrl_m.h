//
// Generated file, do not edit! Created by nedtool 4.6 from inet_stub/linklayer/contract/Ieee802Ctrl.msg.
//

#ifndef _IEEE802CTRL_M_H_
#define _IEEE802CTRL_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "MACAddress.h"
// }}

/**
 * Enum generated from <tt>inet_stub/linklayer/contract/Ieee802Ctrl.msg:30</tt> by nedtool.
 * <pre>
 * //
 * // Message kind values used with in communication between L3 and IEEE 802 L2
 * //
 * enum Ieee802MessageKind
 * {
 * 
 *     IEEE802CTRL_DATA = 2003;  // data to/from higher layer
 *     IEEE802CTRL_REGISTER_DSAP = 2004;  // higher layer registers itself in LLC
 *     IEEE802CTRL_DEREGISTER_DSAP = 2005;  // higher layer deregisters itself in LLC
 *     IEEE802CTRL_SENDPAUSE = 2006;  // higher layer wants MAC to send PAUSE frame
 * }
 * </pre>
 */
enum Ieee802MessageKind {
    IEEE802CTRL_DATA = 2003,
    IEEE802CTRL_REGISTER_DSAP = 2004,
    IEEE802CTRL_DEREGISTER_DSAP = 2005,
    IEEE802CTRL_SENDPAUSE = 2006
};

/**
 * Enum generated from <tt>inet_stub/linklayer/contract/Ieee802Ctrl.msg:42</tt> by nedtool.
 * <pre>
 * //
 * // Some 8-bit SAP values for IEEE 802.x LLC headers.
 * //
 * enum SAPCode
 * {
 * 
 *     SAP_IBM_SNA = 0x04;
 *     SAP_IP = 0x06;
 *     SAP_3COM = 0x80;
 *     SAP_SNAP = 0xAA;
 *     SAP_BANYAN = 0xBC;
 *     SAP_NOVELL_IPX = 0xE0;
 *     SAP_LAN_MANAGER = 0xF4;
 *     SAP_CLNS = 0xFE;
 * }
 * </pre>
 */
enum SAPCode {
    SAP_IBM_SNA = 0x04,
    SAP_IP = 0x06,
    SAP_3COM = 0x80,
    SAP_SNAP = 0xAA,
    SAP_BANYAN = 0xBC,
    SAP_NOVELL_IPX = 0xE0,
    SAP_LAN_MANAGER = 0xF4,
    SAP_CLNS = 0xFE
};

/**
 * Enum generated from <tt>inet_stub/linklayer/contract/Ieee802Ctrl.msg:58</tt> by nedtool.
 * <pre>
 * //
 * // Some EtherType values (Ethernet II).
 * //
 * enum EtherType
 * {
 * 
 *     ETHERTYPE_IPv4 = 0x0800;
 *     ETHERTYPE_ARP = 0x0806;
 *     ETHERTYPE_RARP = 0x8035;
 *     ETHERTYPE_IPv6 = 0x86DD;
 *     ETHERTYPE_MPLS_UNICAST = 0x8847;
 *     ETHERTYPE_MPLS_MULTICAST = 0x8848;
 * }
 * </pre>
 */
enum EtherType {
    ETHERTYPE_IPv4 = 0x0800,
    ETHERTYPE_ARP = 0x0806,
    ETHERTYPE_RARP = 0x8035,
    ETHERTYPE_IPv6 = 0x86DD,
    ETHERTYPE_MPLS_UNICAST = 0x8847,
    ETHERTYPE_MPLS_MULTICAST = 0x8848
};

/**
 * Class generated from <tt>inet_stub/linklayer/contract/Ieee802Ctrl.msg:72</tt> by nedtool.
 * <pre>
 * //
 * // Control structure for communication between LLC and higher layers
 * //
 * class Ieee802Ctrl
 * {
 *     MACAddress src;  // src MAC address (can be left empty when sending)
 *     MACAddress dest; // dest MAC address
 *     int etherType @enum(EtherType);   // used with ~EthernetIIFrame
 *     int ssap;        // used with IEEE 802 LLC (see ~EtherFrameWithLLC)
 *     int dsap;        // used with IEEE 802 LLC (see ~EtherFrameWithLLC)
 *     int pauseUnits;  // used with IEEE802CTRL_SENDPAUSE
 *     int inputPort;   // convenience field, used between ~IPv6 and ~IPv6NeighbourDiscovery
 * }
 * </pre>
 */
class Ieee802Ctrl : public ::cObject
{
  protected:
    MACAddress src_var;
    MACAddress dest_var;
    int etherType_var;
    int ssap_var;
    int dsap_var;
    int pauseUnits_var;
    int inputPort_var;

  private:
    void copy(const Ieee802Ctrl& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802Ctrl&);

  public:
    Ieee802Ctrl();
    Ieee802Ctrl(const Ieee802Ctrl& other);
    virtual ~Ieee802Ctrl();
    Ieee802Ctrl& operator=(const Ieee802Ctrl& other);
    virtual Ieee802Ctrl *dup() const {return new Ieee802Ctrl(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getSrc();
    virtual const MACAddress& getSrc() const {return const_cast<Ieee802Ctrl*>(this)->getSrc();}
    virtual void setSrc(const MACAddress& src);
    virtual MACAddress& getDest();
    virtual const MACAddress& getDest() const {return const_cast<Ieee802Ctrl*>(this)->getDest();}
    virtual void setDest(const MACAddress& dest);
    virtual int getEtherType() const;
    virtual void setEtherType(int etherType);
    virtual int getSsap() const;
    virtual void setSsap(int ssap);
    virtual int getDsap() const;
    virtual void setDsap(int dsap);
    virtual int getPauseUnits() const;
    virtual void setPauseUnits(int pauseUnits);
    virtual int getInputPort() const;
    virtual void setInputPort(int inputPort);
};

inline void doPacking(cCommBuffer *b, Ieee802Ctrl& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802Ctrl& obj) {obj.parsimUnpack(b);}


#endif // ifndef _IEEE802CTRL_M_H_

