/*
 *	server/zone/objects/waypoint/WaypointObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WaypointObject.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	WaypointObjectStub
 */

WaypointObject::WaypointObject() : IntangibleObject(DummyConstructorParameter::instance()) {
	WaypointObjectImplementation* _implementation = new WaypointObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

WaypointObject::WaypointObject(DummyConstructorParameter* param) : IntangibleObject(param) {
}

WaypointObject::~WaypointObject() {
}


void WaypointObject::loadTemplateData(SharedObjectTemplate* templateData) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void WaypointObject::insertToMessage(BaseMessage* msg) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->insertToMessage(msg);
}

void WaypointObject::setCellID(unsigned int id) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addUnsignedIntParameter(id);

		method.executeWithVoidReturn();
	} else
		_implementation->setCellID(id);
}

void WaypointObject::setPlanetCRC(unsigned int crc) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedIntParameter(crc);

		method.executeWithVoidReturn();
	} else
		_implementation->setPlanetCRC(crc);
}

void WaypointObject::setCustomName(const UnicodeString& name) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addUnicodeParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->setCustomName(name);
}

UnicodeString WaypointObject::getCustomName() {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithUnicodeReturn(_return_getCustomName);
		return _return_getCustomName;
	} else
		return _implementation->getCustomName();
}

void WaypointObject::setColor(byte newColor) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addByteParameter(newColor);

		method.executeWithVoidReturn();
	} else
		_implementation->setColor(newColor);
}

void WaypointObject::setActive(byte newStatus) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addByteParameter(newStatus);

		method.executeWithVoidReturn();
	} else
		_implementation->setActive(newStatus);
}

void WaypointObject::setUnknown(unsigned long long id) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addUnsignedLongParameter(id);

		method.executeWithVoidReturn();
	} else
		_implementation->setUnknown(id);
}

void WaypointObject::setSpecialTypeID(int id) {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addSignedIntParameter(id);

		method.executeWithVoidReturn();
	} else
		_implementation->setSpecialTypeID(id);
}

int WaypointObject::getSpecialTypeID() {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSpecialTypeID();
}

void WaypointObject::toggleStatus() {
	WaypointObjectImplementation* _implementation = (WaypointObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		_implementation->toggleStatus();
}

DistributedObjectServant* WaypointObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void WaypointObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	WaypointObjectImplementation
 */

WaypointObjectImplementation::WaypointObjectImplementation(DummyConstructorParameter* param) : IntangibleObjectImplementation(param) {
	_initializeImplementation();
}


WaypointObjectImplementation::~WaypointObjectImplementation() {
}


void WaypointObjectImplementation::finalize() {
}

void WaypointObjectImplementation::_initializeImplementation() {
	_setClassHelper(WaypointObjectHelper::instance());

	_serializationHelperMethod();
}

void WaypointObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (WaypointObject*) stub;
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WaypointObjectImplementation::_getStub() {
	return _this;
}

WaypointObjectImplementation::operator const WaypointObject*() {
	return _this;
}

void WaypointObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WaypointObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WaypointObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WaypointObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WaypointObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WaypointObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WaypointObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WaypointObjectImplementation::_serializationHelperMethod() {
	IntangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("WaypointObject");

	addSerializableVariable("cellID", &cellID);
	addSerializableVariable("unknown", &unknown);
	addSerializableVariable("planetCRC", &planetCRC);
	addSerializableVariable("customName", &customName);
	addSerializableVariable("color", &color);
	addSerializableVariable("active", &active);
	addSerializableVariable("specialTypeID", &specialTypeID);
}

WaypointObjectImplementation::WaypointObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/waypoint/WaypointObject.idl(38):  		Logger.setLoggingName("WaypointObject");
	Logger::setLoggingName("WaypointObject");
}

void WaypointObjectImplementation::setCellID(unsigned int id) {
	// server/zone/objects/waypoint/WaypointObject.idl(48):  		cellID = id;
	cellID = id;
}

void WaypointObjectImplementation::setPlanetCRC(unsigned int crc) {
	// server/zone/objects/waypoint/WaypointObject.idl(52):  		planetCRC = crc;
	planetCRC = crc;
}

void WaypointObjectImplementation::setCustomName(const UnicodeString& name) {
	// server/zone/objects/waypoint/WaypointObject.idl(56):  		customName = name;
	customName = name;
}

UnicodeString WaypointObjectImplementation::getCustomName() {
	// server/zone/objects/waypoint/WaypointObject.idl(60):  		return customName;
	return customName;
}

void WaypointObjectImplementation::setColor(byte newColor) {
	// server/zone/objects/waypoint/WaypointObject.idl(64):  		color = newColor;
	color = newColor;
}

void WaypointObjectImplementation::setActive(byte newStatus) {
	// server/zone/objects/waypoint/WaypointObject.idl(68):  		active = newStatus;
	active = newStatus;
}

void WaypointObjectImplementation::setUnknown(unsigned long long id) {
	// server/zone/objects/waypoint/WaypointObject.idl(72):  		unknown = id;
	unknown = id;
}

void WaypointObjectImplementation::setSpecialTypeID(int id) {
	// server/zone/objects/waypoint/WaypointObject.idl(76):  		specialTypeID = id;
	specialTypeID = id;
}

int WaypointObjectImplementation::getSpecialTypeID() {
	// server/zone/objects/waypoint/WaypointObject.idl(80):  		return specialTypeID;
	return specialTypeID;
}

void WaypointObjectImplementation::toggleStatus() {
	// server/zone/objects/waypoint/WaypointObject.idl(84):  		active = !active;
	active = !active;
}

/*
 *	WaypointObjectAdapter
 */

WaypointObjectAdapter::WaypointObjectAdapter(WaypointObjectImplementation* obj) : IntangibleObjectAdapter(obj) {
}

Packet* WaypointObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		setCellID(inv->getUnsignedIntParameter());
		break;
	case 7:
		setPlanetCRC(inv->getUnsignedIntParameter());
		break;
	case 8:
		setCustomName(inv->getUnicodeParameter(_param0_setCustomName__UnicodeString_));
		break;
	case 9:
		resp->insertUnicode(getCustomName());
		break;
	case 10:
		setColor(inv->getByteParameter());
		break;
	case 11:
		setActive(inv->getByteParameter());
		break;
	case 12:
		setUnknown(inv->getUnsignedLongParameter());
		break;
	case 13:
		setSpecialTypeID(inv->getSignedIntParameter());
		break;
	case 14:
		resp->insertSignedInt(getSpecialTypeID());
		break;
	case 15:
		toggleStatus();
		break;
	default:
		return NULL;
	}

	return resp;
}

void WaypointObjectAdapter::setCellID(unsigned int id) {
	((WaypointObjectImplementation*) impl)->setCellID(id);
}

void WaypointObjectAdapter::setPlanetCRC(unsigned int crc) {
	((WaypointObjectImplementation*) impl)->setPlanetCRC(crc);
}

void WaypointObjectAdapter::setCustomName(const UnicodeString& name) {
	((WaypointObjectImplementation*) impl)->setCustomName(name);
}

UnicodeString WaypointObjectAdapter::getCustomName() {
	return ((WaypointObjectImplementation*) impl)->getCustomName();
}

void WaypointObjectAdapter::setColor(byte newColor) {
	((WaypointObjectImplementation*) impl)->setColor(newColor);
}

void WaypointObjectAdapter::setActive(byte newStatus) {
	((WaypointObjectImplementation*) impl)->setActive(newStatus);
}

void WaypointObjectAdapter::setUnknown(unsigned long long id) {
	((WaypointObjectImplementation*) impl)->setUnknown(id);
}

void WaypointObjectAdapter::setSpecialTypeID(int id) {
	((WaypointObjectImplementation*) impl)->setSpecialTypeID(id);
}

int WaypointObjectAdapter::getSpecialTypeID() {
	return ((WaypointObjectImplementation*) impl)->getSpecialTypeID();
}

void WaypointObjectAdapter::toggleStatus() {
	((WaypointObjectImplementation*) impl)->toggleStatus();
}

/*
 *	WaypointObjectHelper
 */

WaypointObjectHelper* WaypointObjectHelper::staticInitializer = WaypointObjectHelper::instance();

WaypointObjectHelper::WaypointObjectHelper() {
	className = "WaypointObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void WaypointObjectHelper::finalizeHelper() {
	WaypointObjectHelper::finalize();
}

DistributedObject* WaypointObjectHelper::instantiateObject() {
	return new WaypointObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WaypointObjectHelper::instantiateServant() {
	return new WaypointObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WaypointObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WaypointObjectAdapter((WaypointObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

