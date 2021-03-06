//
// Generated file, do not edit! Created by nedtool 4.6 from modules/messages/UWANMacPkt.msg.
//

#ifndef _UWANMACPKT_M_H_
#define _UWANMACPKT_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "MiXiMMacPkt.h"
// }}

/**
 * Class generated from <tt>modules/messages/UWANMacPkt.msg:23</tt> by nedtool.
 * <pre>
 * class UWANMacPkt extends MacPkt
 * {
 *     int frameType;
 *     int timestamp;
 *     int msgType;		// for RTS
 *     int transOrder;		// for CTS
 * }
 * </pre>
 */
class UWANMacPkt : public ::MacPkt
{
  protected:
    int frameType_var;
    int timestamp_var;
    int msgType_var;
    int transOrder_var;

  private:
    void copy(const UWANMacPkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const UWANMacPkt&);

  public:
    UWANMacPkt(const char *name=NULL);
    UWANMacPkt(const UWANMacPkt& other);
    virtual ~UWANMacPkt();
    UWANMacPkt& operator=(const UWANMacPkt& other);
    virtual UWANMacPkt *dup() const {return new UWANMacPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getFrameType() const;
    virtual void setFrameType(int frameType);
    virtual int getTimestamp() const;
    virtual void setTimestamp(int timestamp);
    virtual int getMsgType() const;
    virtual void setMsgType(int msgType);
    virtual int getTransOrder() const;
    virtual void setTransOrder(int transOrder);
};

inline void doPacking(cCommBuffer *b, UWANMacPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, UWANMacPkt& obj) {obj.parsimUnpack(b);}


#endif // ifndef _UWANMACPKT_M_H_

