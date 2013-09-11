
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_test.h"
#include "test.h"

#include "kernel/main.h"


/*
 +------------------------------------------------------------------------+
 | Phalcon Framework                                                      |
 +------------------------------------------------------------------------+
 | Copyright (c) 2011-2013 Phalcon Team (http://www.phalconphp.com)       |
 +------------------------------------------------------------------------+
 | This source file is subject to the New BSD License that is bundled     |
 | with this package in the file docs/LICENSE.txt.                        |
 |                                                                        |
 | If you did not receive a copy of the license and are unable to         |
 | obtain it through the world-wide-web, please send an email             |
 | to license@phalconphp.com so we can send you a copy immediately.       |
 +------------------------------------------------------------------------+
 | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
 |          Eduar Carvajal <eduar@phalconphp.com>                         |
 +------------------------------------------------------------------------+
 */
/**
 * Phalcon\Mvc\Model\ManagerInterface
 *
 * Interface for Phalcon\Mvc\Model\Manager
 */
ZEPHIR_INIT_CLASS(Phalcon_Mvc_Model_ManagerInterface) {

	ZEPHIR_REGISTER_INTERFACE(Phalcon\\Mvc\\Model, ManagerInterface, phalcon, mvc_model_managerinterface, phalcon_mvc_model_managerinterface_method_entry);


	return SUCCESS;

}

/**
 * Initializes a model in the model manager
 *
 * @param Phalcon\Mvc\ModelInterface model
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, initialize);

/**
 * Check of a model is already initialized
 *
 * @param string modelName
 * @return boolean
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, isInitialized);

/**
 * Get last initialized model
 *
 * @return Phalcon\Mvc\ModelInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getLastInitialized);

/**
 * Loads a model throwing an exception if it doesn't exist
 *
 * @param string modelName
 * @param boolean newInstance
 * @return Phalcon\Mvc\ModelInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, load);

/**
 * Setup a 1-1 relation between two models
 *
 * @param   Phalcon\Mvc\ModelInterface model
 * @param	mixed fields
 * @param	string referencedModel
 * @param	mixed referencedFields
 * @param	array options
 * @return  Phalcon\Mvc\Model\RelationInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, addHasOne);

/**
 * Setup a relation reverse 1-1  between two models
 *
 * @param 	Phalcon\Mvc\ModelInterface model
 * @param	mixed fields
 * @param	string referencedModel
 * @param	mixed referencedFields
 * @param	array options
 * @return 	Phalcon\Mvc\Model\RelationInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, addBelongsTo);

/**
 * Setup a relation 1-n between two models
 *
 * @param 	Phalcon\Mvc\ModelInterface model
 * @param	mixed fields
 * @param	string referencedModel
 * @param	mixed referencedFields
 * @param	array options
 * @return 	Phalcon\Mvc\Model\RelationInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, addHasMany);

/**
 * Checks whether a model has a belongsTo relation with another model
 *
 * @param 	string modelName
 * @param 	string modelRelation
 * @return 	boolean
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, existsBelongsTo);

/**
 * Checks whether a model has a hasMany relation with another model
 *
 * @param 	string modelName
 * @param 	string modelRelation
 * @return 	boolean
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, existsHasMany);

/**
 * Checks whether a model has a hasOne relation with another model
 *
 * @param 	string modelName
 * @param 	string modelRelation
 * @return 	boolean
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, existsHasOne);

/**
 * Gets belongsTo related records from a model
 *
 * @param string method
 * @param string modelName
 * @param string modelRelation
 * @param Phalcon\Mvc\Model record
 * @param array parameters
 * @return Phalcon\Mvc\Model\ResultsetInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getBelongsToRecords);

/**
 * Gets hasMany related records from a model
 *
 * @param string method
 * @param string modelName
 * @param string modelRelation
 * @param Phalcon\Mvc\Model record
 * @param array parameters
 * @return Phalcon\Mvc\Model\ResultsetInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getHasManyRecords);

/**
 * Gets belongsTo related records from a model
 *
 * @param string method
 * @param string modelName
 * @param string modelRelation
 * @param Phalcon\Mvc\Model record
 * @param array parameters
 * @return Phalcon\Mvc\Model\ResultsetInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getHasOneRecords);

/**
 * Gets belongsTo relations defined on a model
 *
 * @param  Phalcon\Mvc\ModelInterface model
 * @return array
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getBelongsTo);

/**
 * Gets hasMany relations defined on a model
 *
 * @param  Phalcon\Mvc\ModelInterface model
 * @return array
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getHasMany);

/**
 * Gets hasOne relations defined on a model
 *
 * @param  Phalcon\Mvc\ModelInterface model
 * @return array
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getHasOne);

/**
 * Gets hasOne relations defined on a model
 *
 * @param  Phalcon\Mvc\ModelInterface model
 * @return array
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getHasOneAndHasMany);

/**
 * Query all the relationships defined on a model
 *
 * @param string modelName
 * @return Phalcon\Mvc\Model\RelationInterface[]
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getRelations);

/**
 * Query the relations between two models
 *
 * @param string first
 * @param string second
 * @return array
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getRelationsBetween);

/**
 * Creates a Phalcon\Mvc\Model\Query without execute it
 *
 * @param string phql
 * @return Phalcon\Mvc\Model\QueryInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, createQuery);

/**
 * Creates a Phalcon\Mvc\Model\Query and execute it
 *
 * @param string phql
 * @param array placeholders
 * @return Phalcon\Mvc\Model\QueryInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, executeQuery);

/**
 * Creates a Phalcon\Mvc\Model\Query\Builder
 *
 * @param string params
 * @return Phalcon\Mvc\Model\Query\BuilderInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, createBuilder);

/**
 * Binds a behavior to a model
 *
 * @param Phalcon\Mvc\ModelInterface model
 * @param Phalcon\Mvc\Model\BehaviorInterface behavior
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, addBehavior);

/**
 * Receives events generated in the models and dispatches them to a events-manager if available
 * Notify the behaviors that are listening in the model
 *
 * @param string eventName
 * @param Phalcon\Mvc\ModelInterface model
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, notifyEvent);

/**
 * Dispatch a event to the listeners and behaviors
 * This method expects that the endpoint listeners/behaviors returns true
 * meaning that a least one is implemented
 *
 * @param Phalcon\Mvc\ModelInterface model
 * @param string eventName
 * @param array data
 * @return boolean
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, missingMethod);

/**
 * Returns the last query created or executed in the
 *
 * @return Phalcon\Mvc\Model\QueryInterface
 */
ZEPHIR_DOC_METHOD(Phalcon_Mvc_Model_ManagerInterface, getLastQuery);

