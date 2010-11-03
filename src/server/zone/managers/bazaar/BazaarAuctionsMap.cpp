/*
 *	server/zone/managers/bazaar/BazaarAuctionsMap.cpp generated by engine3 IDL compiler 0.60
 */

#include "BazaarAuctionsMap.h"

#include "server/zone/objects/tangible/terminal/bazaar/AuctionItem.h"

/*
 *	BazaarAuctionsMapStub
 */

BazaarAuctionsMap::BazaarAuctionsMap() : ManagedObject(DummyConstructorParameter::instance()) {
	BazaarAuctionsMapImplementation* _implementation = new BazaarAuctionsMapImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

BazaarAuctionsMap::BazaarAuctionsMap(DummyConstructorParameter* param) : ManagedObject(param) {
}

BazaarAuctionsMap::~BazaarAuctionsMap() {
}


int BazaarAuctionsMap::getAuctionCount() {
	BazaarAuctionsMapImplementation* _implementation = (BazaarAuctionsMapImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getAuctionCount();
}

bool BazaarAuctionsMap::containsAuction(unsigned long long objectID) {
	BazaarAuctionsMapImplementation* _implementation = (BazaarAuctionsMapImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedLongParameter(objectID);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->containsAuction(objectID);
}

void BazaarAuctionsMap::addAuction(unsigned long long objectID, AuctionItem* item) {
	BazaarAuctionsMapImplementation* _implementation = (BazaarAuctionsMapImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addUnsignedLongParameter(objectID);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else
		_implementation->addAuction(objectID, item);
}

int BazaarAuctionsMap::getPlayerAuctionCount(unsigned long long objectID) {
	BazaarAuctionsMapImplementation* _implementation = (BazaarAuctionsMapImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addUnsignedLongParameter(objectID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getPlayerAuctionCount(objectID);
}

void BazaarAuctionsMap::dropAuction(unsigned long long objectID) {
	BazaarAuctionsMapImplementation* _implementation = (BazaarAuctionsMapImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		_implementation->dropAuction(objectID);
}

AuctionItem* BazaarAuctionsMap::getAuction(unsigned long long objectID) {
	BazaarAuctionsMapImplementation* _implementation = (BazaarAuctionsMapImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addUnsignedLongParameter(objectID);

		return (AuctionItem*) method.executeWithObjectReturn();
	} else
		return _implementation->getAuction(objectID);
}

AuctionItem* BazaarAuctionsMap::getAuction(int index) {
	BazaarAuctionsMapImplementation* _implementation = (BazaarAuctionsMapImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(index);

		return (AuctionItem*) method.executeWithObjectReturn();
	} else
		return _implementation->getAuction(index);
}

VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* BazaarAuctionsMap::getAuctions() {
	BazaarAuctionsMapImplementation* _implementation = (BazaarAuctionsMapImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getAuctions();
}

DistributedObjectServant* BazaarAuctionsMap::_getImplementation() {

	_updated = true;
	return _impl;
}

void BazaarAuctionsMap::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	BazaarAuctionsMapImplementation
 */

BazaarAuctionsMapImplementation::BazaarAuctionsMapImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


BazaarAuctionsMapImplementation::~BazaarAuctionsMapImplementation() {
}


void BazaarAuctionsMapImplementation::finalize() {
}

void BazaarAuctionsMapImplementation::_initializeImplementation() {
	_setClassHelper(BazaarAuctionsMapHelper::instance());

	_serializationHelperMethod();
}

void BazaarAuctionsMapImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BazaarAuctionsMap*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* BazaarAuctionsMapImplementation::_getStub() {
	return _this;
}

BazaarAuctionsMapImplementation::operator const BazaarAuctionsMap*() {
	return _this;
}

void BazaarAuctionsMapImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BazaarAuctionsMapImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BazaarAuctionsMapImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BazaarAuctionsMapImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BazaarAuctionsMapImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BazaarAuctionsMapImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BazaarAuctionsMapImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BazaarAuctionsMapImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("BazaarAuctionsMap");

	addSerializableVariable("auctions", &auctions);
	addSerializableVariable("playerAuctionCount", &playerAuctionCount);
}

BazaarAuctionsMapImplementation::BazaarAuctionsMapImplementation() {
	_initializeImplementation();
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(59):  		auctions.setNullValue(null);
	(&auctions)->setNullValue(NULL);
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(60):  		auctions.setNoDuplicateInsertPlan();
	(&auctions)->setNoDuplicateInsertPlan();
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(62):  		playerAuctionCount.setNullValue(0);
	(&playerAuctionCount)->setNullValue(0);
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(63):  		playerAuctionCount.setAllowOverwriteInsertPlan();
	(&playerAuctionCount)->setAllowOverwriteInsertPlan();
}

int BazaarAuctionsMapImplementation::getAuctionCount() {
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(67):  		return auctions.size();
	return (&auctions)->size();
}

bool BazaarAuctionsMapImplementation::containsAuction(unsigned long long objectID) {
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(71):  		return auctions.contains(objectID);
	return (&auctions)->contains(objectID);
}

void BazaarAuctionsMapImplementation::addAuction(unsigned long long objectID, AuctionItem* item) {
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(75):  		auctions.put(objectID, item);
	(&auctions)->put(objectID, item);
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(76):  		playerAuctionCount.put(item.getOwnerID(), playerAuctionCount.get(item.getOwnerID()) + 1);
	(&playerAuctionCount)->put(item->getOwnerID(), (&playerAuctionCount)->get(item->getOwnerID()) + 1);
}

int BazaarAuctionsMapImplementation::getPlayerAuctionCount(unsigned long long objectID) {
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(80):  		return playerAuctionCount.get(objectID);
	return (&playerAuctionCount)->get(objectID);
}

void BazaarAuctionsMapImplementation::dropAuction(unsigned long long objectID) {
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(84):  		AuctionItem item = auctions.get(objectID);
	AuctionItem* item = (&auctions)->get(objectID);
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(86):  		int 
	if (item == NULL)	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(87):  			return;
	return;
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(89):  count = playerAuctionCount.get(item.getOwnerID());
	int count = (&playerAuctionCount)->get(item->getOwnerID());
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(91):  		count = count - 1;
	count = count - 1;
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(93):  
	if (count < 1)	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(94):  			playerAuctionCount.drop(item.getOwnerID());
	(&playerAuctionCount)->drop(item->getOwnerID());

	else 	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(96):  			playerAuctionCount.put(item.getOwnerID(), count);
	(&playerAuctionCount)->put(item->getOwnerID(), count);
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(98):  		auctions.drop(objectID);
	(&auctions)->drop(objectID);
}

AuctionItem* BazaarAuctionsMapImplementation::getAuction(unsigned long long objectID) {
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(102):  		return auctions.get(objectID);
	return (&auctions)->get(objectID);
}

AuctionItem* BazaarAuctionsMapImplementation::getAuction(int index) {
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(106):  		return auctions.get(index);
	return (&auctions)->get(index);
}

VectorMap<unsigned long long, ManagedReference<AuctionItem* > >* BazaarAuctionsMapImplementation::getAuctions() {
	// server/zone/managers/bazaar/BazaarAuctionsMap.idl(111):  		return auctions;
	return (&auctions);
}

/*
 *	BazaarAuctionsMapAdapter
 */

BazaarAuctionsMapAdapter::BazaarAuctionsMapAdapter(BazaarAuctionsMapImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* BazaarAuctionsMapAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(getAuctionCount());
		break;
	case 7:
		resp->insertBoolean(containsAuction(inv->getUnsignedLongParameter()));
		break;
	case 8:
		addAuction(inv->getUnsignedLongParameter(), (AuctionItem*) inv->getObjectParameter());
		break;
	case 9:
		resp->insertSignedInt(getPlayerAuctionCount(inv->getUnsignedLongParameter()));
		break;
	case 10:
		dropAuction(inv->getUnsignedLongParameter());
		break;
	case 11:
		resp->insertLong(getAuction(inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 12:
		resp->insertLong(getAuction(inv->getSignedIntParameter())->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

int BazaarAuctionsMapAdapter::getAuctionCount() {
	return ((BazaarAuctionsMapImplementation*) impl)->getAuctionCount();
}

bool BazaarAuctionsMapAdapter::containsAuction(unsigned long long objectID) {
	return ((BazaarAuctionsMapImplementation*) impl)->containsAuction(objectID);
}

void BazaarAuctionsMapAdapter::addAuction(unsigned long long objectID, AuctionItem* item) {
	((BazaarAuctionsMapImplementation*) impl)->addAuction(objectID, item);
}

int BazaarAuctionsMapAdapter::getPlayerAuctionCount(unsigned long long objectID) {
	return ((BazaarAuctionsMapImplementation*) impl)->getPlayerAuctionCount(objectID);
}

void BazaarAuctionsMapAdapter::dropAuction(unsigned long long objectID) {
	((BazaarAuctionsMapImplementation*) impl)->dropAuction(objectID);
}

AuctionItem* BazaarAuctionsMapAdapter::getAuction(unsigned long long objectID) {
	return ((BazaarAuctionsMapImplementation*) impl)->getAuction(objectID);
}

AuctionItem* BazaarAuctionsMapAdapter::getAuction(int index) {
	return ((BazaarAuctionsMapImplementation*) impl)->getAuction(index);
}

/*
 *	BazaarAuctionsMapHelper
 */

BazaarAuctionsMapHelper* BazaarAuctionsMapHelper::staticInitializer = BazaarAuctionsMapHelper::instance();

BazaarAuctionsMapHelper::BazaarAuctionsMapHelper() {
	className = "BazaarAuctionsMap";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BazaarAuctionsMapHelper::finalizeHelper() {
	BazaarAuctionsMapHelper::finalize();
}

DistributedObject* BazaarAuctionsMapHelper::instantiateObject() {
	return new BazaarAuctionsMap(DummyConstructorParameter::instance());
}

DistributedObjectServant* BazaarAuctionsMapHelper::instantiateServant() {
	return new BazaarAuctionsMapImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BazaarAuctionsMapHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BazaarAuctionsMapAdapter((BazaarAuctionsMapImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

