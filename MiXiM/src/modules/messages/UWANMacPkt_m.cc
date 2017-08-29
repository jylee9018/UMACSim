//
// Generated file, do not edit! Created by nedtool 4.6 from modules/messages/UWANMacPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "UWANMacPkt_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(UWANMacPkt);

UWANMacPkt::UWANMacPkt(const char *name) : ::MacPkt(name)
{
    this->frameType_var = 0;
    this->timestamp_var = 0;
    this->msgType_var = 0;
    this->transOrder_var = 0;
}

UWANMacPkt::UWANMacPkt(const UWANMacPkt& other) : ::MacPkt(other)
{
    copy(other);
}

UWANMacPkt::~UWANMacPkt()
{
}

UWANMacPkt& UWANMacPkt::operator=(const UWANMacPkt& other)
{
    if (this==&other) return *this;
    ::MacPkt::operator=(other);
    copy(other);
    return *this;
}

void UWANMacPkt::copy(const UWANMacPkt& other)
{
    this->frameType_var = other.frameType_var;
    this->timestamp_var = other.timestamp_var;
    this->msgType_var = other.msgType_var;
    this->transOrder_var = other.transOrder_var;
}

void UWANMacPkt::parsimPack(cCommBuffer *b)
{
    ::MacPkt::parsimPack(b);
    doPacking(b,this->frameType_var);
    doPacking(b,this->timestamp_var);
    doPacking(b,this->msgType_var);
    doPacking(b,this->transOrder_var);
}

void UWANMacPkt::parsimUnpack(cCommBuffer *b)
{
    ::MacPkt::parsimUnpack(b);
    doUnpacking(b,this->frameType_var);
    doUnpacking(b,this->timestamp_var);
    doUnpacking(b,this->msgType_var);
    doUnpacking(b,this->transOrder_var);
}

int UWANMacPkt::getFrameType() const
{
    return frameType_var;
}

void UWANMacPkt::setFrameType(int frameType)
{
    this->frameType_var = frameType;
}

int UWANMacPkt::getTimestamp() const
{
    return timestamp_var;
}

void UWANMacPkt::setTimestamp(int timestamp)
{
    this->timestamp_var = timestamp;
}

int UWANMacPkt::getMsgType() const
{
    return msgType_var;
}

void UWANMacPkt::setMsgType(int msgType)
{
    this->msgType_var = msgType;
}

int UWANMacPkt::getTransOrder() const
{
    return transOrder_var;
}

void UWANMacPkt::setTransOrder(int transOrder)
{
    this->transOrder_var = transOrder;
}

class UWANMacPktDescriptor : public cClassDescriptor
{
  public:
    UWANMacPktDescriptor();
    virtual ~UWANMacPktDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(UWANMacPktDescriptor);

UWANMacPktDescriptor::UWANMacPktDescriptor() : cClassDescriptor("UWANMacPkt", "MacPkt")
{
}

UWANMacPktDescriptor::~UWANMacPktDescriptor()
{
}

bool UWANMacPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UWANMacPkt *>(obj)!=NULL;
}

const char *UWANMacPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UWANMacPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int UWANMacPktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *UWANMacPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "frameType",
        "timestamp",
        "msgType",
        "transOrder",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int UWANMacPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "frameType")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "msgType")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "transOrder")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UWANMacPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *UWANMacPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int UWANMacPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UWANMacPkt *pp = (UWANMacPkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UWANMacPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UWANMacPkt *pp = (UWANMacPkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getFrameType());
        case 1: return long2string(pp->getTimestamp());
        case 2: return long2string(pp->getMsgType());
        case 3: return long2string(pp->getTransOrder());
        default: return "";
    }
}

bool UWANMacPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UWANMacPkt *pp = (UWANMacPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setFrameType(string2long(value)); return true;
        case 1: pp->setTimestamp(string2long(value)); return true;
        case 2: pp->setMsgType(string2long(value)); return true;
        case 3: pp->setTransOrder(string2long(value)); return true;
        default: return false;
    }
}

const char *UWANMacPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *UWANMacPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UWANMacPkt *pp = (UWANMacPkt *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


