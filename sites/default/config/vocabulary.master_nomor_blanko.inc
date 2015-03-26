<?php
/**
 * @file
 * vocabulary.master_nomor_blanko.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '42',
  'name' => 'Master Nomor Blanko',
  'machine_name' => 'master_nomor_blanko',
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
