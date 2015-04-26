<?php
/**
 * @file
 * vocabulary.master_status_lelang.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '6',
  'name' => 'Master Status Lelang',
  'machine_name' => 'master_status_lelang',
  'description' => '',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
