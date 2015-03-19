<?php
/**
 * @file
 * vocabulary.master_alih_kredit_jenis_berkas.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '24',
  'name' => 'Master Alih Kredit Jenis Berkas',
  'machine_name' => 'master_alih_kredit_jenis_berkas',
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
