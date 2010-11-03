/*
 *	server/zone/objects/tangible/loot/LootkitObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "LootkitObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	LootkitObjectStub
 */

LootkitObject::LootkitObject() : TangibleObject(DummyConstructorParameter::instance()) {
	LootkitObjectImplementation* _implementation = new LootkitObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

LootkitObject::LootkitObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

LootkitObject::~LootkitObject() {
}


void LootkitObject::initializeTransientMembers() {
	LootkitObjectImplementation* _implementation = (LootkitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int LootkitObject::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	LootkitObjectImplementation* _implementation = (LootkitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(object);
		method.addSignedIntParameter(containmentType);
		method.addAsciiParameter(errorDescription);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->canAddObject(object, containmentType, errorDescription);
}

int LootkitObject::notifyObjectInserted(SceneObject* object) {
	LootkitObjectImplementation* _implementation = (LootkitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(object);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObjectInserted(object);
}

PlayerCreature* LootkitObject::getPlayer() {
	LootkitObjectImplementation* _implementation = (LootkitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return _implementation->getPlayer();
}

void LootkitObject::loadTemplateData(SharedObjectTemplate* templateData) {
	LootkitObjectImplementation* _implementation = (LootkitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void LootkitObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	LootkitObjectImplementation* _implementation = (LootkitObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->fillAttributeList(msg, object);
}

DistributedObjectServant* LootkitObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void LootkitObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	LootkitObjectImplementation
 */

LootkitObjectImplementation::LootkitObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


LootkitObjectImplementation::~LootkitObjectImplementation() {
}


void LootkitObjectImplementation::finalize() {
}

void LootkitObjectImplementation::_initializeImplementation() {
	_setClassHelper(LootkitObjectHelper::instance());

	_serializationHelperMethod();
}

void LootkitObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (LootkitObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* LootkitObjectImplementation::_getStub() {
	return _this;
}

LootkitObjectImplementation::operator const LootkitObject*() {
	return _this;
}

void LootkitObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void LootkitObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void LootkitObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void LootkitObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void LootkitObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void LootkitObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void LootkitObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void LootkitObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("LootkitObject");

	addSerializableVariable("components", &components);
	addSerializableVariable("attributes", &attributes);
	addSerializableVariable("comps", &comps);
	addSerializableVariable("reward", &reward);
	addSerializableVariable("deleteComponents", &deleteComponents);
}

LootkitObjectImplementation::LootkitObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/loot/LootkitObject.idl(76):  		Logger.setLoggingName("LootKitObject");
	Logger::setLoggingName("LootKitObject");
}

void LootkitObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/loot/LootkitObject.idl(80):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/loot/LootkitObject.idl(82):  		Logger.setLoggingName("LootKitObject");
	Logger::setLoggingName("LootKitObject");
}

/*
 *	LootkitObjectAdapter
 */

LootkitObjectAdapter::LootkitObjectAdapter(LootkitObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* LootkitObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(canAddObject((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_canAddObject__SceneObject_int_String_)));
		break;
	case 8:
		resp->insertSignedInt(notifyObjectInserted((SceneObject*) inv->getObjectParameter()));
		break;
	case 9:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case 10:
		fillAttributeList((AttributeListMessage*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void LootkitObjectAdapter::initializeTransientMembers() {
	((LootkitObjectImplementation*) impl)->initializeTransientMembers();
}

int LootkitObjectAdapter::canAddObject(SceneObject* object, int containmentType, String& errorDescription) {
	return ((LootkitObjectImplementation*) impl)->canAddObject(object, containmentType, errorDescription);
}

int LootkitObjectAdapter::notifyObjectInserted(SceneObject* object) {
	return ((LootkitObjectImplementation*) impl)->notifyObjectInserted(object);
}

PlayerCreature* LootkitObjectAdapter::getPlayer() {
	return ((LootkitObjectImplementation*) impl)->getPlayer();
}

void LootkitObjectAdapter::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	((LootkitObjectImplementation*) impl)->fillAttributeList(msg, object);
}

/*
 *	LootkitObjectHelper
 */

LootkitObjectHelper* LootkitObjectHelper::staticInitializer = LootkitObjectHelper::instance();

LootkitObjectHelper::LootkitObjectHelper() {
	className = "LootkitObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void LootkitObjectHelper::finalizeHelper() {
	LootkitObjectHelper::finalize();
}

DistributedObject* LootkitObjectHelper::instantiateObject() {
	return new LootkitObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* LootkitObjectHelper::instantiateServant() {
	return new LootkitObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* LootkitObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LootkitObjectAdapter((LootkitObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

